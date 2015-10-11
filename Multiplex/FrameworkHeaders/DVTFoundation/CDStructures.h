//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"
#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^dispatch_block_t)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct ArrayBuilder {
    id _field1[62];
    id *_field2;
    unsigned int _field3;
    unsigned int _field4;
};

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

struct DVTBitSet {
    unsigned long long _field1;
    unsigned long long _field2[0];
};

struct DVTMacroNameLookupCursor {
    id _field1;
    unsigned long long _field2;
    id _field3;
    id _field4;
    struct DVTMacroValueAssignment *_field5;
    id _field6;
};

struct DVTMacroValueAssignment;

struct DVTMacroValueAssignmentMapTable {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    void *_field5;
};

struct DVTNestedMacroExpansionState {
    id _field1;
    unsigned int _field2;
    struct DVTMacroNameLookupCursor _field3;
    id _field4;
    struct DVTNestedMacroExpansionState *_field5;
};

struct DVTStringBuilder {
    unsigned short _field1[512];
    unsigned short *_field2;
    unsigned long long _field3;
    unsigned long long _field4;
};

struct UParseError {
    int _field1;
    int _field2;
    unsigned short _field3[16];
    unsigned short _field4[16];
};

struct _CSTypeRef {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct _DVTDiffContextFlags {
    unsigned int ignoresCase:1;
    unsigned int ignoresLeadingSpaces:1;
    unsigned int ignoresSpacesInRuns:1;
    unsigned int ignoresTrailingSpaces:1;
    unsigned int ignoresLineEnds:1;
    unsigned int ignoresCommon:1;
    unsigned int RESERVED:26;
};

struct _DVTDiffToken {
    struct _NSRange range;
    unsigned long long hash;
    int type;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct __hash_node<std::__1::__hash_value_type<DVTFuture *, long>, void *>;

struct __sFILE {
    char *_field1;
    int _field2;
    int _field3;
    short _field4;
    short _field5;
    struct __sbuf _field6;
    int _field7;
    void *_field8;
    CDUnknownFunctionPointerType _field9;
    CDUnknownFunctionPointerType _field10;
    CDUnknownFunctionPointerType _field11;
    CDUnknownFunctionPointerType _field12;
    struct __sbuf _field13;
    struct __sFILEX *_field14;
    int _field15;
    unsigned char _field16[3];
    unsigned char _field17[1];
    struct __sbuf _field18;
    int _field19;
    long long _field20;
};

struct __sbuf {
    char *_field1;
    int _field2;
};

struct __va_list_tag {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
    void *_field4;
};

struct fastsimplearray {
    unsigned long long _field1;
    unsigned long long _field2;
    void **_field3;
};

struct fsid {
    int _field1[2];
};

struct sockaddr {
    unsigned char _field1;
    unsigned char _field2;
    char _field3[14];
};

struct sockaddr_storage {
    unsigned char ss_len;
    unsigned char ss_family;
    char __ss_pad1[6];
    long long __ss_align;
    char __ss_pad2[112];
};

struct stat {
    int _field1;
    unsigned short _field2;
    unsigned short _field3;
    unsigned long long _field4;
    unsigned int _field5;
    unsigned int _field6;
    int _field7;
    struct timespec _field8;
    struct timespec _field9;
    struct timespec _field10;
    struct timespec _field11;
    long long _field12;
    long long _field13;
    int _field14;
    unsigned int _field15;
    unsigned int _field16;
    int _field17;
    long long _field18[2];
};

struct statfs {
    unsigned int _field1;
    int _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    struct fsid _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
    char _field13[16];
    char _field14[1024];
    char _field15[1024];
    unsigned int _field16[8];
};

struct timespec {
    long long _field1;
    long long _field2;
};

struct unique_ptr {
    struct __compressed_pair {
        struct __hash_node **__first_;
        struct __bucket_list_deallocator {
            struct __compressed_pair {
                unsigned long long __first_;
            } __data_;
        } __second_;
    } __ptr_;
};

struct unordered_map {
    struct __hash_table {
        struct unique_ptr __bucket_list_;
        struct __compressed_pair {
            struct __hash_node_base {
                struct __hash_node *__next_;
            } __first_;
        } __p1_;
        struct __compressed_pair {
            unsigned long long __first_;
        } __p2_;
        struct __compressed_pair {
            float __first_;
        } __p3_;
    } __table_;
};

struct vector {
    dispatch_block_t *__begin_;
    dispatch_block_t *__end_;
    struct __compressed_pair {
        dispatch_block_t *__first_;
    } __end_cap_;
};

struct vector {
    dispatch_block_t *__begin_;
    dispatch_block_t *__end_;
    struct __compressed_pair {
        dispatch_block_t *__first_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    unsigned short *_field1;
    long long _field2;
} CDStruct_f444e920;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
} CDStruct_d2b197d1;

typedef struct {
    double loadFactor;
    long long numberOfHashFunctions;
    long long windowWidth;
} CDStruct_fd921134;

typedef struct {
    long long expectedNumberOfInsertions;
    double loadFactor;
    long long numberOfHashFunctions;
} CDStruct_d703e233;

typedef struct {
    long long location;
    long long length;
} CDStruct_627e0f85;

typedef struct {
    int tokenType;
    int tokenAltType;
    CDStruct_627e0f85 charRange;
    char *lexeme;
    int lexemeLength;
    int outOfBand;
} CDStruct_341fcc3f;

typedef struct {
    CDStruct_d703e233 bloomFilterSpecification;
    long long windowWidth;
} CDStruct_92de0e9e;

#pragma mark Typedef'd Unions

typedef union {
    struct {
        unsigned short updateComponent;
        unsigned short minorComponent;
        unsigned int majorComponent;
    } independent;
    unsigned long long combined;
} CDUnion_7de6e739;

