//
// ComDayCqSearchpromoteImplSearchPromoteServiceImplProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComDayCqSearchpromoteImplSearchPromoteServiceImplProperties: Codable {

    public var cqSearchpromoteConfigurationServerUri: ConfigNodePropertyString?
    public var cqSearchpromoteConfigurationEnvironment: ConfigNodePropertyString?
    public var connectionTimeout: ConfigNodePropertyInteger?
    public var socketTimeout: ConfigNodePropertyInteger?

    public init(cqSearchpromoteConfigurationServerUri: ConfigNodePropertyString?, cqSearchpromoteConfigurationEnvironment: ConfigNodePropertyString?, connectionTimeout: ConfigNodePropertyInteger?, socketTimeout: ConfigNodePropertyInteger?) {
        self.cqSearchpromoteConfigurationServerUri = cqSearchpromoteConfigurationServerUri
        self.cqSearchpromoteConfigurationEnvironment = cqSearchpromoteConfigurationEnvironment
        self.connectionTimeout = connectionTimeout
        self.socketTimeout = socketTimeout
    }

    public enum CodingKeys: String, CodingKey { 
        case cqSearchpromoteConfigurationServerUri = "cq.searchpromote.configuration.server.uri"
        case cqSearchpromoteConfigurationEnvironment = "cq.searchpromote.configuration.environment"
        case connectionTimeout = "connection.timeout"
        case socketTimeout = "socket.timeout"
    }


}

