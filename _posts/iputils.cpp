#include <Rcpp.h> 
#include <boost/asio/ip/address_v4.hpp>

using namespace Rcpp;

// [[Rcpp::export]]
unsigned long rinet_pton (CharacterVector ip) { 
  return(boost::asio::ip::address_v4::from_string(ip[0]).to_ulong());
}


// [[Rcpp::export]]
CharacterVector rinet_ntop (unsigned long addr) {
  return(boost::asio::ip::address_v4(addr).to_string());
}


// [[Rcpp::export]]
IntegerVector rinet_pton_vec (CharacterVector ip) { 
  int n = ip.size();
  IntegerVector out(n);
  
  for(int i = 0; i < n; ++i) {
    out[i] = boost::asio::ip::address_v4::from_string(ip[i]).to_ulong();
  }
  return out;
}


// [[Rcpp::export]]
CharacterVector rinet_ntop_vec (IntegerVector addr) {
  int n = addr.size();
  CharacterVector out(n);
  
  for(int i = 0; i < n; ++i) {
    out[i] = boost::asio::ip::address_v4(addr[i]).to_string();
  }
  return out;
}
