#include <pal.h>

/**
 *
 * Calculates inverse tangent (arc tangent) of the input value. The function
 * does not check for illegal input values.
 *
 * @param a     Pointer to input vector
 *
 * @param c     Pointer to output vector
 *
 * @param n     Size of 'a' and 'c' vector.
 *
 * @param p     Number of processor to use (task parallelism)
 *
 * @param team  Team to work with 
 *
 * @return      None
 *
 */
#include <math.h>
void p_atanh_f32(float *a, float *c, int n, int p, p_team_t team)
{

    int i;
    for (i = 0; i < n; i++) {
        *(c + i) = atanhf(*(a + i));
    }
}
