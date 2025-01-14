//
// ComDayCqPollingImporterImplPollingImporterImplProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComDayCqPollingImporterImplPollingImporterImplProperties: Codable {

    public var importerMinInterval: ConfigNodePropertyInteger?
    public var importerUser: ConfigNodePropertyString?
    public var excludePaths: ConfigNodePropertyArray?
    public var includePaths: ConfigNodePropertyArray?

    public init(importerMinInterval: ConfigNodePropertyInteger?, importerUser: ConfigNodePropertyString?, excludePaths: ConfigNodePropertyArray?, includePaths: ConfigNodePropertyArray?) {
        self.importerMinInterval = importerMinInterval
        self.importerUser = importerUser
        self.excludePaths = excludePaths
        self.includePaths = includePaths
    }

    public enum CodingKeys: String, CodingKey { 
        case importerMinInterval = "importer.min.interval"
        case importerUser = "importer.user"
        case excludePaths = "exclude.paths"
        case includePaths = "include.paths"
    }


}

