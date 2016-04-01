# ServiceAPIs

# Build Java class example
protoc -I=./VehicleDriveProto/Design\ Files/ --java_out=./VehicleDriveProto/Production\ Files/Java/ ./VehicleDriveProto/Design\ Files/vehicledriveprotocol.proto
