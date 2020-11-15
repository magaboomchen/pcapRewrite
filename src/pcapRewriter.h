#include <string>

#include "pcapReader.h"
#include "pcapWriter.h"

using namespace std;

#ifndef PCAPREWRITER_H
#define PCAPREWRITER_H


class PcapRewriter{
    public:
        PcapRewriter(PcapReader pr, PcapWriter pw);
        void setPolicy(string dstipmap, string osrcip, string odstip);
        void rewrite(void);
    private:
        PcapReader pr;
        PcapWriter pw;
        string dstipmap;
        string osrcip;
        string odstip;

        bool isValidPkt(pcap_pkt pcapPkt);
        void rewriteDstIP(pcap_pkt &pcapPkt);
        void addIPTunnel(pcap_pkt &pcapPkt);
};

#endif