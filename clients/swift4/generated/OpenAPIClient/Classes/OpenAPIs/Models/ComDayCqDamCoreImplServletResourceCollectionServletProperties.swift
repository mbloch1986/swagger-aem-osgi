//
// ComDayCqDamCoreImplServletResourceCollectionServletProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComDayCqDamCoreImplServletResourceCollectionServletProperties: Codable {

    public var slingServletResourceTypes: ConfigNodePropertyArray?
    public var slingServletMethods: ConfigNodePropertyString?
    public var slingServletSelectors: ConfigNodePropertyString?
    public var downloadConfig: ConfigNodePropertyString?
    public var viewSelector: ConfigNodePropertyString?
    public var sendEmail: ConfigNodePropertyBoolean?

    public init(slingServletResourceTypes: ConfigNodePropertyArray?, slingServletMethods: ConfigNodePropertyString?, slingServletSelectors: ConfigNodePropertyString?, downloadConfig: ConfigNodePropertyString?, viewSelector: ConfigNodePropertyString?, sendEmail: ConfigNodePropertyBoolean?) {
        self.slingServletResourceTypes = slingServletResourceTypes
        self.slingServletMethods = slingServletMethods
        self.slingServletSelectors = slingServletSelectors
        self.downloadConfig = downloadConfig
        self.viewSelector = viewSelector
        self.sendEmail = sendEmail
    }

    public enum CodingKeys: String, CodingKey { 
        case slingServletResourceTypes = "sling.servlet.resourceTypes"
        case slingServletMethods = "sling.servlet.methods"
        case slingServletSelectors = "sling.servlet.selectors"
        case downloadConfig = "download.config"
        case viewSelector = "view.selector"
        case sendEmail = "send_email"
    }


}

