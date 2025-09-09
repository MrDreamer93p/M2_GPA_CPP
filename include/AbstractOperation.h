#ifndef ABSTRACTOPERATION_H
#define ABSTRACTOPERATION_H

#include <string>

class AbstractOperation {
public:
    explicit AbstractOperation(int serviceTime);
    virtual ~AbstractOperation() = default;
    virtual bool isUrgent() const = 0;
    virtual std::string toString() const = 0;
    int getServiceTime() const;

protected:
    int serviceTime;
};

#endif
