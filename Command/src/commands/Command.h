#ifndef DESIGN_PATTERNS_COMMAND_H
#define DESIGN_PATTERNS_COMMAND_H


/// common interface for all commands
class Command
{
    public:
        virtual void execute () = 0;
};


#endif //DESIGN_PATTERNS_COMMAND_H
