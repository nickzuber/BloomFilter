
#ifndef INCLUDE_BLOOM_FILTER_HPP
#define INCLUDE_BLOOM_FILTER_HPP

class BloomFilter
{

    public:
    
        BloomFilter () {};
    
        template<typename T>
        inline bool contains (const T& t) const;
    
        template<typename T>
        inline void add (const T& t) const;
    
        inline void clear();
    
        virtual ~BloomFilter() {};
        
    private:
        // hash functions, remember we only need 2 to simulate k
        // mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm i think custom bitarray so we can make it light
};

#endif /* INCLUDE_BLOOM_FILTER_HPP */