double d;

const double pi = 3.1416;
const double pii = 5.6;
double * ptr = const_cast<double * >(&pi);

const double *const cpt = &pi;
double ** ccpt = const_cast<double ** >(&cpt);
//double *const ptd = &d;
//const double *ctd = &d;
//const double *ptc = &pi;
//double *const ptp = &pi;
//const double *const ppi = &pi;
//double *const *pptr1 = &ptc;
//double *const *pptr2 = &ptd;
void F ()
{


    *ccpt = &pii;
    *ptr = 5;
//    ptr = new double;
//    r = 1.0;
//    *ptr = 2.0;
//    cpt = new double;
//    *cpt = 3.0;
//    ptc = new double;
//    *ptc = 4.0;
//    ptd = new double;
//    *ptd = 5.0;
//    ctd = new double;
//    *ctd = 6.0;
//    ptp = new double;
//    *ptp = 7.0;
//    ppi = new double;
//    *ppi = 8.0;
}

int main(void){
    F();
    return 0;
}