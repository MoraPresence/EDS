#include "stribog/stribog_alg.h"

uint512 fromStrToUint256(char* a){

}
int main() {
    uint256 p;
    p.qw[0] = 0x0000000000000431;
    p.qw[1] = 0x0000000000000000;
    p.qw[2] = 0x0000000000000000;
    p.qw[3] = 0x8000000000000000;

    uint256 a;
    a.qw[0] = 0x0000000000000007;
    a.qw[1] = 0x0000000000000000;
    a.qw[2] = 0x0000000000000000;
    a.qw[3] = 0x0000000000000000;

    uint256 b;
    b.qw[0] = 0x514C0CE9DAE23B7E;
    b.qw[1] = 0x563F6E6A3472FC2A;
    b.qw[2] = 0x39B8E022FBAFEF40;
    b.qw[3] = 0x5FBFF498AA938CE7;

    uint256 m;
    m.qw[0] = 0xC59CFC193ACCF5B3;
    m.qw[1] = 0x50FE8A1892976154;
    m.qw[2] = 0x0000000000000001;
    m.qw[3] = 0x8000000000000000;

    uint256 q;
    q.qw[0] = 0xC59CFC193ACCF5B3;
    q.qw[1] = 0x50FE8A1892976154;
    q.qw[2] = 0x0000000000000001;
    q.qw[3] = 0x8000000000000000;

    uint256 Xp;
    Xp.qw[0] = 0x0000000000000002;
    Xp.qw[1] = 0x0000000000000000;
    Xp.qw[2] = 0x0000000000000000;
    Xp.qw[3] = 0x0000000000000000;

    uint256 Yp;
    Yp.qw[0] = 0x2B96ABBCEA7E8FC8;
    Yp.qw[1] = 0x85C97F0A9CA26712;
    Yp.qw[2] = 0xBD6316030E16D19C;
    Yp.qw[3] = 0x08E2A8A0E65147D4;

    uint256 d;
    d.qw[0] = 0x1D19CE9891EC3B28;
    d.qw[1] = 0x1B60961F49397EEE;
    d.qw[2] = 0x10ED359DD39A72C1;
    d.qw[3] = 0x7A929ADE789BB9BE;

    uint256 Xq;
    Xq.qw[0] = 0x6689DBD8E56FD80B;
    Xq.qw[1] = 0x8585BA1D4E9B788F;
    Xq.qw[2] = 0xD8595BEC458B50C5;
    Xq.qw[3] = 0x7F2B49E270DB6D90;

    uint256 Yq;
    Yq.qw[0] = 0xDFFB101A87FF77DA;
    Yq.qw[1] = 0xAF64D1C593D26627;
    Yq.qw[2] = 0x85C8413A977B3CBB;
    Yq.qw[3] = 0x26F1B489D6701DD1;

    uint256 h_;
   // hash_256("MESSAGE", 512, h_);
    h_.qw[0] = 0xDFFB101A87FF77DA;
    h_.qw[1] = 0xAF64D1C593D26627;
    h_.qw[2] = 0x85C8413A977B3CBB;
    h_.qw[3] = 0x26F1B489D6701DD1;
    return 0;
}
