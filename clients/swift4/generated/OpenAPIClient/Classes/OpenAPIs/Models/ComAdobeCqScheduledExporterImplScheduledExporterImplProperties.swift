//
// ComAdobeCqScheduledExporterImplScheduledExporterImplProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComAdobeCqScheduledExporterImplScheduledExporterImplProperties: Codable {

    public var includePaths: ConfigNodePropertyArray?
    public var exporterUser: ConfigNodePropertyString?

    public init(includePaths: ConfigNodePropertyArray?, exporterUser: ConfigNodePropertyString?) {
        self.includePaths = includePaths
        self.exporterUser = exporterUser
    }

    public enum CodingKeys: String, CodingKey { 
        case includePaths = "include.paths"
        case exporterUser = "exporter.user"
    }


}

