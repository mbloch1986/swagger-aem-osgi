//
// ComDayCqDamS7damCommonProcessVideoThumbnailDownloadProcessProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComDayCqDamS7damCommonProcessVideoThumbnailDownloadProcessProperties: Codable {

    public var processLabel: ConfigNodePropertyString?

    public init(processLabel: ConfigNodePropertyString?) {
        self.processLabel = processLabel
    }

    public enum CodingKeys: String, CodingKey { 
        case processLabel = "process.label"
    }


}
