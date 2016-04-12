# ServiceAPIs

# Build Java messages
protoc -I=./VehicleDriveProto/Design\ Files/ --java_out=./VehicleDriveProto/Production\ Files/Java/ ./VehicleDriveProto/Design\ Files/vehicledriveprotocol.proto

# Build Python message
protoc -I=./VehicleDriveProto/SourceMessages/ --python_out=./VehicleDriveProto/Production/Python/ ./VehicleDriveProto/SourceMessages/vehicledriveprotocol.proto
