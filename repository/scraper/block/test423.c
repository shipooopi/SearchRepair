int test(int create_bvec_pool){
if ( create_bvec_pool     )     {  bs - >  bvec_pool = biovec_create_pool ( pool_size       )          ;  if ( s   - >   bvec_pool )          goto  bad ;  }    }