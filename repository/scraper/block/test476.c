int test(int ew_blkg){
if ( ew_blkg     )     { new_blkg = blkg_alloc ( blkcg       , q       , GFP_ATOMIC       )          ;  if ( unlikely ( ew_blkg       )       )     { ret = -   ENOMEM ;   goto  err_put_css ;  }      }    }