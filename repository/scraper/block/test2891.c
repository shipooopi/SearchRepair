int test(int q){
if ( q   - >   elevator )     { spin_lock_irq ( q    -  >       queue_lock )    ;  ioc_clear_queue ( q       )    ;  spin_unlock_irq ( q    -  >       queue_lock )    ;  elevator_exit ( q    -  >       elevator )    ;  }    }