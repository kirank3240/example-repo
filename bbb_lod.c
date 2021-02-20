#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MIN_BITDEPTH            1
#define MAX_BITDEPTH            64
#define ZERO			0	

typedef long long mpsdata_t;
typedef unsigned long long mpudata_t;
typedef unsigned short bitdepth_t;

int main()
{
	const mpsdata_t data = 10.5;
    	const bitdepth_t bitdepth = 32;

	bool cnd = ((bitdepth>=MIN_BITDEPTH)&&(bitdepth<=MAX_BITDEPTH));

	if (cnd)
    	{
    		mpsdata_t minval = (~(mpudata_t)ZERO)<<(bitdepth-1);
		printf("(~(mpudata_t)ZERO) = %llu\n", (~(mpudata_t)ZERO));
		printf("(~ZERO) = %u\n", ~(unsigned int)ZERO);
		printf("(~ZERO)s = %d\n", ~ZERO);
    		mpsdata_t maxval = (~(mpudata_t)ZERO)>>(MAX_BITDEPTH-bitdepth+1);
    		cnd = ((data>=minval)&&(data<=maxval));
		printf("(MAX_BITDEPTH-bitdepth+1) = %d\n", (MAX_BITDEPTH-bitdepth+1));
		printf("minval = %lld\n", minval);
		printf("maxval = %lld\n", (~(mpudata_t)ZERO)>>(MAX_BITDEPTH-bitdepth+1));
//		mpsdata_t check = (~(mpudata_t)ZERO) >> 49;
//		printf("check = %lld\n", check);
    	}
	printf("cnd = %d\n", cnd);
	
	return 0;
}
