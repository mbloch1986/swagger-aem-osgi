//
// ComAdobeGraniteWorkflowCorePayloadMapCacheProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComAdobeGraniteWorkflowCorePayloadMapCacheProperties: Codable {

    public var getSystemWorkflowModels: ConfigNodePropertyArray?
    public var getPackageRootPath: ConfigNodePropertyString?

    public init(getSystemWorkflowModels: ConfigNodePropertyArray?, getPackageRootPath: ConfigNodePropertyString?) {
        self.getSystemWorkflowModels = getSystemWorkflowModels
        self.getPackageRootPath = getPackageRootPath
    }


}
