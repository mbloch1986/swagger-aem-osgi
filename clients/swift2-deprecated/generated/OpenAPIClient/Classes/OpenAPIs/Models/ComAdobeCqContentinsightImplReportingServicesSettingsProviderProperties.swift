//
// ComAdobeCqContentinsightImplReportingServicesSettingsProviderProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComAdobeCqContentinsightImplReportingServicesSettingsProviderProperties: JSONEncodable {
    public var reportingservicesUrl: ConfigNodePropertyString?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["reportingservices.url"] = self.reportingservicesUrl?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
