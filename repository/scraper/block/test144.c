int test(int bs){
if ( bs     )     { if ( bio_flagged ( bio       , BIO_OWNS_VEC       )       )     bvec_free ( bs    -  >          <missing ';'>       bvec_pool ,   bio - >   bi_io_vec ,  BIO_POOL_IDX ( bio       )    ) ;  p = bio        ;  p -=  bs    -  >        front_pad ;  mempool_free ( p       , bs    -  >       bio_pool )    ;  }    else { kfree ( bio       )    ;  }    }