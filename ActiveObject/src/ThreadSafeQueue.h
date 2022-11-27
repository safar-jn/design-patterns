#ifndef DESIGN_PATTERNS_THREADSAFEQUEUE_H
#define DESIGN_PATTERNS_THREADSAFEQUEUE_H


#include <queue>
#include <mutex>
#include <condition_variable>


template <typename T>
class ThreadSafeQueue
{
    public:
        void   enqueue (T item);
        T      dequeue ();
        size_t size    ();
    private:
        std::queue<T>           _queue;
        std::mutex              _mutex;
        std::condition_variable _cv;
};


#endif //DESIGN_PATTERNS_THREADSAFEQUEUE_H
