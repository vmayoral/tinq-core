
Tinq port to embedded and deep-embedded platforms (e.g.: Cortex-M3, -M4, M0, MSP430, etc.).

### Timeline
This section provides an overview of the timeline required to port tinq-core to embedded platforms:

- [x] Quick overview/understand fo the OMG DDS standart `[1 week]`
- [ ] Read/understand the code and run the examples `[4 weeks]`
- [ ] Strip the code to meet `ANSI C-11` `[2 weeks]`
- [ ] Evaluate the overall implementation (wireshark) and do interfacing tests with other DDSs `[ 2 weeks]`
- [ ] ROS client nano library client API `[ 4 weeks]` 
- [ ] ROS 2 Desktop <-> ROS 2 Embedded tests `[ 4 weeks]`

Total estimated `17 weeks`.

### Questions/Issues
- Code example to run? Steps? https://github.com/brunodebus/tinq-core/pull/6
- cmake file system or keep the makefile one?
- xtypes?
- DDS implementation depends on librt?
- DDS documented anywhere?
- Difference between DataReader and DynamicDataReader?