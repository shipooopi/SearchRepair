int test(int ret, int ev, int dev){
if ( ret     )     { kobject_uevent ( - >    <missing ';'>   kobj ,   KOBJ_REMOVE ) ;  kobject_del ( - >    <missing ';'>   kobj ) ;  blk_trace_remove_sysfs ( dev       )    ;  kobject_put ( ev    -  >       kobj )    ;  return ret       ;  }    }