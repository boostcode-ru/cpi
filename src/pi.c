/*
 * Copyright (C) 2010 - 2018 Intel Corporation. All Rights Reserved.
 *
 * The source code contained or described herein and all
 * documents related to the source code ("Material") are owned by
 * Intel Corporation or its suppliers or licensors. Title to the
 * Material remains with Intel Corporation or its suppliers and
 * licensors. The Material is protected by worldwide copyright
 * laws and treaty provisions.  No part of the Material may be
 * used, copied, reproduced, modified, published, uploaded,
 * posted, transmitted, distributed,  or disclosed in any way
 * except as expressly provided in the license provided with the
 * Materials.  No license under any patent, copyright, trade
 * secret or other intellectual property right is granted to or
 * conferred upon you by disclosure or delivery of the Materials,
 * either expressly, by implication, inducement, estoppel or
 * otherwise, except as expressly provided in the license
 * provided with the Materials 
 *
 */

#include <stdio.h>
#include <time.h>


#define N 1000000000

double f( double x );

int main()
{
	double sum, pi, x, h;
	clock_t start, stop;
	int i;

        h = (double)1.0/(double)N;
        sum = 0.0;

	start = clock();
        for ( i=0; i<N ; i++ ){
          x = h*(i-0.5);
          sum = sum + f(x);
        }
	stop = clock();

	// print value of pi to be sure multiplication is correct
        pi = h*sum;
        printf("    pi is approximately : %f \n", pi);
	// print elapsed time
	printf("Elapsed time = %lf seconds\n",((double)(stop - start)) / CLOCKS_PER_SEC);

	return 0;

}
