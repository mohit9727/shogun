/************************************************************************/
/*                                                                      */
/*   kernel.h                                                           */
/*                                                                      */
/*   User defined kernel function. Feel free to plug in your own.       */
/*                                                                      */
/*                                                                      */
/************************************************************************/

/* KERNEL_PARM is defined in svm_common.h The field 'custom' is reserved for */
/* parameters of the user defined kernel. You can also access and use */
/* the parameters of the other kernels. */

#ifndef _LOCIMPKERNEL_H___
#define _LOCIMPKERNEL_H___

#include "lib/common.h"
#include "kernel/Kernel.h"

class CLocImpKernel: public CKernel
{
  public:
    CLocImpKernel(int width_, int degree1_, int degree2_, int degree3_) ;
    ~CLocImpKernel() ;

    virtual void init(CFeatures* f);
    virtual void cleanup();
    
 protected:
    /// compute kernel function for features a and b
    /// idx_{a,b} denote the index of the feature vectors
    /// in the corresponding feature object
    REAL compute(CFeatures* a, int idx_a, CFeatures* b, int idx_b)=0;
    /*    compute_kernel*/

 protected:
    int width, degree1, degree2, degree3 ;
};
#endif


