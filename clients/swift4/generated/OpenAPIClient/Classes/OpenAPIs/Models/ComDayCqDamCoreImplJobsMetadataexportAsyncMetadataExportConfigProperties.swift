//
// ComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComDayCqDamCoreImplJobsMetadataexportAsyncMetadataExportConfigProperties: Codable {

    public var operation: ConfigNodePropertyString?
    public var emailEnabled: ConfigNodePropertyBoolean?

    public init(operation: ConfigNodePropertyString?, emailEnabled: ConfigNodePropertyBoolean?) {
        self.operation = operation
        self.emailEnabled = emailEnabled
    }


}
