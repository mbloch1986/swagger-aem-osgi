//
// ComDayCqRewriterLinkcheckerImplLinkCheckerImplProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class ComDayCqRewriterLinkcheckerImplLinkCheckerImplProperties: JSONEncodable {

    public var schedulerPeriod: ConfigNodePropertyInteger?
    public var schedulerConcurrent: ConfigNodePropertyBoolean?
    public var serviceBadLinkToleranceInterval: ConfigNodePropertyInteger?
    public var serviceCheckOverridePatterns: ConfigNodePropertyArray?
    public var serviceCacheBrokenInternalLinks: ConfigNodePropertyBoolean?
    public var serviceSpecialLinkPrefix: ConfigNodePropertyArray?
    public var serviceSpecialLinkPatterns: ConfigNodePropertyArray?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["scheduler.period"] = self.schedulerPeriod?.encodeToJSON()
        nillableDictionary["scheduler.concurrent"] = self.schedulerConcurrent?.encodeToJSON()
        nillableDictionary["service.bad_link_tolerance_interval"] = self.serviceBadLinkToleranceInterval?.encodeToJSON()
        nillableDictionary["service.check_override_patterns"] = self.serviceCheckOverridePatterns?.encodeToJSON()
        nillableDictionary["service.cache_broken_internal_links"] = self.serviceCacheBrokenInternalLinks?.encodeToJSON()
        nillableDictionary["service.special_link_prefix"] = self.serviceSpecialLinkPrefix?.encodeToJSON()
        nillableDictionary["service.special_link_patterns"] = self.serviceSpecialLinkPatterns?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}

