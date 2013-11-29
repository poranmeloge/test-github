#lwip名词解释
**IPC**:进程间通讯方式
**semaphores**：信号量
**mailboxes**：邮箱

#lwip协议说明
##IPV6协议
根据RFC2460对IPV6功能的描述，IPV6主要负责把上层来的数据段添加IPV6报头，交由底层发送；把下层接收到的报文经过处理和分析，交给TCP、UDP或ICMPV6处理。和IPv4相比IPv6的改变主要集中在以下几个方面:地址容量的扩展，报头格式的简化，支持扩展和选项的改进，数据流标签的能力，认证和保密的能力等。

##ICMPV6协议
ICMPV6协议合并了IPv4中ICMP(控制报文协议)，I-GMP(组成员协议)、ARP(地址解析协议)等多个协议的功能，实现差错控制，地址解释等功能，并支持Mobile IPv6。ICMPV6报文封装在IP报文中，是IP报文的有效载荷数据，它通过它的各种错误报文和信息报文的交换来实现差错控制，地址解释和路由前缀信息获取等功能。 

##邻居发现(Neighbor discovery)协议
邻居发现协议ND是IPv6协议栈中的核心协议，是IPV6解决邻节点交互的一个重要协议。它定义了下列问题的解决机制：路由发现，前缀发现，参数发现，地址自动配置，地址解释，下一跳决定，邻居不可达，重复地址检测，重定向。邻居发现的这些功能是通过5个ICMP报文（邻居请求/邻居通告报文，路由器请求/路由器通告报文,重定向报文）的交换来实现的。

#ARP(Address Resolution Protocol)协议
ARP是地址解析协议

#ICMP(Internet Control Message Protocol)协议
ICMP是Internet控制报文协议，用于在 IP 主机、路由器之间传递控制消息。

#lwip移植
##1、


#lwip源代码分析
##1、
**SSID**: *Service Set ID*,最基本的认证方式,无加密认证。  
**WEP**: *Wired Equivalent Privacy*,使用共享密钥的方式进行身份认证。  
**MSDU**： *MAC Service Data Unit*,可以理解为传输的有效数据，MAC帧的data部分。  
**MPDU**： *MAC Protocol Data Unit*,可以理解为经过MAC协议封装的帧，包括MAC帧头。  
**PLCP**： *Physical Layer Convergence Procedure*,可以理解为PHY层的编码和封包过程。  
**PPDU**： *PLCP Protocol Data Unit*,可以理解为PHY层封装的帧，包括PHY帧头和MAC帧。  
**A-MSDU**： *Aggregate MSDU*,MSDU帧聚合。  
**A-MPDU**： *Aggregate MPDU*,MPDU帧聚合。  
**MIMO**： *multiple input multiple output*,一种采用多根天线进行传输的技术。  
**STBC**： *Space-Time Block Code*,空时分组编码，一种可以提高传输质量的编码方式。  
**MCS**： *Modulation Coding Scheme*,11n中规定空间流数目、编码、调制方式和传输速率的一组方案。  
**CSI**： *Channel State Information*,用于波束成形的一个信息域。  
**SGI**： *Short Guard Interval*,11n引入的短防护间隔，该间隔为400ns。  
**RIFS**： *Reduced Interframe Spacing*,11n引入的短帧间隙，减少传输开销。  
**CCA**： *Clear Channel Assessment*,PHY层用于探测信道占用情况的一个功能模块。  
**HT**： *High Throughput*,即采用11n引入的调制编码方式传输，提高了传输速率。  
**LTF**： *Long Training Field*,PHY帧头中一个域，用于对接收端进行训练。  
**Beamformer**: *beamformer*是准备进行波束成形调整的一方。  
**Beamformee**: *beamformee*是辅助对方进行波束成形的一方。  