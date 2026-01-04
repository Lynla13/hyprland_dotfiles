#!/bin/sh
[ "${TERM:-none}" = "linux" ] && \
    printf '%b' '\e]P01c1234
                 \e]P1546BA4
                 \e]P2AA78A0
                 \e]P36A99B9
                 \e]P4B5B2B3
                 \e]P5A1CDD0
                 \e]P6DDD5D3
                 \e]P7f1ede2
                 \e]P8a8a59e
                 \e]P9546BA4
                 \e]PAAA78A0
                 \e]PB6A99B9
                 \e]PCB5B2B3
                 \e]PDA1CDD0
                 \e]PEDDD5D3
                 \e]PFf1ede2
                 \ec'
