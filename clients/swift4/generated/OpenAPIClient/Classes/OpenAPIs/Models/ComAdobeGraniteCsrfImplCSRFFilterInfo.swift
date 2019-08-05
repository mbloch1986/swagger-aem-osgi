//
// ComAdobeGraniteCsrfImplCSRFFilterInfo.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComAdobeGraniteCsrfImplCSRFFilterInfo: Codable {

    public var pid: String?
    public var title: String?
    public var _description: String?
    public var properties: ComAdobeGraniteCsrfImplCSRFFilterProperties?
    public var bundleLocation: String?
    public var serviceLocation: String?

    public init(pid: String?, title: String?, _description: String?, properties: ComAdobeGraniteCsrfImplCSRFFilterProperties?, bundleLocation: String?, serviceLocation: String?) {
        self.pid = pid
        self.title = title
        self._description = _description
        self.properties = properties
        self.bundleLocation = bundleLocation
        self.serviceLocation = serviceLocation
    }

    public enum CodingKeys: String, CodingKey { 
        case pid
        case title
        case _description = "description"
        case properties
        case bundleLocation = "bundle_location"
        case serviceLocation = "service_location"
    }


}
