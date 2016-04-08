# convert IPs to integers
# http://datadrivensecurity.info/blog/posts/2014/May/speeding-up-ipv4-address-conversion-in-r/
# library(Rcpp)
# library(inline)
# Rcpp::sourceCpp("iputils.cpp")
# 
# # test convert an IPv4 string to integer
# rinet_pton("10.0.0.0")
# #[1] 167772160
# 
# # test conversion back
# rinet_ntop(167772160)
# #[1] "10.0.0.0"
# 
# rinet_pton_vec(c("10.0.0.0", "192.168.0.1"))
# rinet_ntop_vec(t.ip[t.ip>0])
