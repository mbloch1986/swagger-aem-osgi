//
// ComAdobeCqContentinsightImplServletsReportingServicesProxyServleProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class ComAdobeCqContentinsightImplServletsReportingServicesProxyServleProperties: JSONEncodable {

    public var reportingservicesProxyWhitelist: ConfigNodePropertyArray?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["reportingservices.proxy.whitelist"] = self.reportingservicesProxyWhitelist?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}

