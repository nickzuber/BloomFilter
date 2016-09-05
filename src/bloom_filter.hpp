
#ifndef INCLUDE_BLOOM_FILTER_HPP
#define INCLUDE_BLOOM_FILTER_HPP

class BloomFilter {
public:
    BloomFilter () {};
    
    bool test ();
    
    void add ();
    
    virtual ~BloomFilter() {
        // destructor
    };
    
private:
};

#endif