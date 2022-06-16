#ifndef MYOTHERFUNCTIONS_HPP_
#define MYOTHERFUNCTIONS_HPP_

int divide(int a, int b)
{
    if (b == 0)
    {
        throw "error";
    }
    return a/b;
}

#endif //MYOTHERFUNCTIONS_HPP_