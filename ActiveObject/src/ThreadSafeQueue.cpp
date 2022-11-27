#include "ThreadSafeQueue.h"


template <typename T>
void ThreadSafeQueue<T>::enqueue (T item)
{
    std::unique_lock<std::mutex> lock (_mutex);
    _queue.push(item);
    _cv.notify_one();
}

template <typename T>
T ThreadSafeQueue<T>::dequeue ()
{
    std::unique_lock<std::mutex> lock (_mutex);
    _cv.wait(lock, [&]{ return !_queue.empty(); });

    T item = _queue.front();
    _queue.pop();

    return item;
}

template <typename T>
size_t ThreadSafeQueue<T>::size ()
{
    std::unique_lock<std::mutex> lock (_mutex);
    return _queue.size();
}
