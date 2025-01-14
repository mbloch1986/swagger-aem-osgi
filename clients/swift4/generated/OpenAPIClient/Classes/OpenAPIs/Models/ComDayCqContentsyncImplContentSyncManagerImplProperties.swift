//
// ComDayCqContentsyncImplContentSyncManagerImplProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComDayCqContentsyncImplContentSyncManagerImplProperties: Codable {

    public var contentsyncFallbackAuthorizable: ConfigNodePropertyString?
    public var contentsyncFallbackUpdateuser: ConfigNodePropertyString?

    public init(contentsyncFallbackAuthorizable: ConfigNodePropertyString?, contentsyncFallbackUpdateuser: ConfigNodePropertyString?) {
        self.contentsyncFallbackAuthorizable = contentsyncFallbackAuthorizable
        self.contentsyncFallbackUpdateuser = contentsyncFallbackUpdateuser
    }

    public enum CodingKeys: String, CodingKey { 
        case contentsyncFallbackAuthorizable = "contentsync.fallback.authorizable"
        case contentsyncFallbackUpdateuser = "contentsync.fallback.updateuser"
    }


}

