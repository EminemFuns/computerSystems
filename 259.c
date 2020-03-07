#include <assert.h>
#include <stdio.h>
typedef unsigned char *byte_pointer;

int  generate_word(){
    int x = 0x98ABCDEF;
    int y = 0x76543210;
    return (y&~0xFF)|(x&0xff);
};


void show_value(int x){
    int z = generate_word();
    size_t res=z;
    assert(res == 0x765432EF);
    show_bytes((byte_pointer) &z, sizeof(int));
}
