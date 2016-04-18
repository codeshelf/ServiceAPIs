# ServiceAPIs

# Build Java messages
protoc -I=./VehicleDriveProto/Design\ Files/ --java_out=./VehicleDriveProto/Production\ Files/Java/ ./VehicleDriveProto/Design\ Files/vehicledriveprotocol.proto

# Build Python message
protoc -I=./VehicleDriveProto/SourceMessages/ --python_out=./VehicleDriveProto/Production/Python/ ./VehicleDriveProto/SourceMessages/vehicledriveprotocol.proto

# NanoPB message generation steps

>cd ServiceAPIs/VehicleDriveProto/Production

>protoc --plugin=nanopb=~/git/nanopb/generator/protoc-gen-nanopb --include_imports=~/git/nanopb/generator/proto/nanopb.proto --proto_path=../SourceMessages -o./McuCmdMsg.pb ../SourceMessages/McuCmdMsg.proto

>python ~/git/nanopb/generator/nanopb_generator.py -f ../SourceMessages/McuCmdMsg.options --output-dir=./NanoPB McuCmdMsg.pb