# pcapWrite

# Prerequest
```
gflags
glog
cmake
g++
```

# Installation
```
cd build
cmake ..
make
```

# example
```
./pcapRewrite -f ./pcap/slice/delVlan_00000_20091218013025 -w ./pcap/test.pcap -dstipmap 2.2.2.2 -osrcip 2.2.0.36 -odstip 10.16.1.1
```