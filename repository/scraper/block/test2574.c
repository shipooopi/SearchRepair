int test(int max_hw_sectors){
if ( ( max_hw_sectors  <  < 9     )  <   PAGE_CACHE_SIZE )     { max_hw_sectors = 1   < < (      <missing ';'>   PAGE_CACHE_SHIFT - 9 ) ;  printk ( KERN_INFO   "%s: set to minimum %d\n"     , __func__       , max_hw_sectors       )    ;  }    }