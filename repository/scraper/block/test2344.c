int test(int rq, int bio, int plug, int current, int use_plug){
if ( use_plug     )     {  struct  blk_plug *  plug = current    -  >        plug ;  if ( plug     )     { blk_mq_bio_to_request ( rq       , bio       )    ;  if ( list_empty ( lug    -        <missing ')'>    >  mq_list     )  )    trace_block_plug ( q       )    ;    else if ( request_count  >=  BLK_MAX_REQUEST_COUNT     )     { blk_flush_plug_list ( plug       , false       )    ;  trace_block_plug ( q       )    ;  }       list_add_tail ( q    -  >          <missing ';'>   queuelist ,   lug - >   mq_list ) ;  blk_mq_put_ctx ( data   ctx     )    ;  return      ;  }      }    }