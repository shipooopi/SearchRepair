int test(int do_copy){
if ( do_copy     )     bio = bio_copy_kern ( q       , kbuf       , len       , gfp_mask       , reading       )          ;    else bio = bio_map_kern ( q       , kbuf       , len       , gfp_mask       )          ;    }