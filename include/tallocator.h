#ifndef T_ALLOCATOR_H
#define T_ALLOCATOR_H

namespace tiny {

template<typename _Ty>
class allocator 
{
public:
    allocator() noexcept { }
    ~allocator() noexcept { }

    typedef _Ty*    pointer;
    typedef _Ty&    reference;
    typedef size_t  size_type;
    typedef const _Ty*  const_pointer;
    typedef const _Ty&  const_reference;
    typedef ptrdiff_t   difference_type;
    
};

}

#include <map>

#endif