# ServiceAPIs

# Build Java messages
protoc -I=./VehicleDriveProto/Design\ Files/ --java_out=./VehicleDriveProto/Production\ Files/Java/ ./VehicleDriveProto/Design\ Files/vehicledriveprotocol.proto

# Build Python message

>cd ~/git/ServiceAPIs/VehicleDriveProto/Production

>protoc -I=../SourceMessages/ --python_out=./Python/ ../SourceMessages/VcuCmdMsg.proto

>protoc -I=../SourceMessages/ --python_out=./Python/ ../SourceMessages/McuCmdMsg.proto

# NanoPB message generation steps

>cd ~/git/ServiceAPIs/VehicleDriveProto/Production

>protoc --plugin=nanopb=~/git/nanopb/generator/protoc-gen-nanopb --include_imports=~/git/nanopb/generator/proto/nanopb.proto --proto_path=../SourceMessages -o./McuCmdMsg.pb ../SourceMessages/McuCmdMsg.proto

>python ~/git/nanopb/generator/nanopb_generator.py -f ../SourceMessages/McuCmdMsg.options --output-dir=./NanoPB McuCmdMsg.pb