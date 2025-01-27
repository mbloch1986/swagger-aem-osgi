//
// ComDayCqReplicationImplReplicationReceiverImplProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComDayCqReplicationImplReplicationReceiverImplProperties: Codable {

    public var receiverTmpfileThreshold: ConfigNodePropertyInteger?
    public var receiverPackagesUseInstall: ConfigNodePropertyBoolean?

    public init(receiverTmpfileThreshold: ConfigNodePropertyInteger?, receiverPackagesUseInstall: ConfigNodePropertyBoolean?) {
        self.receiverTmpfileThreshold = receiverTmpfileThreshold
        self.receiverPackagesUseInstall = receiverPackagesUseInstall
    }

    public enum CodingKeys: String, CodingKey { 
        case receiverTmpfileThreshold = "receiver.tmpfile.threshold"
        case receiverPackagesUseInstall = "receiver.packages.use.install"
    }


}

