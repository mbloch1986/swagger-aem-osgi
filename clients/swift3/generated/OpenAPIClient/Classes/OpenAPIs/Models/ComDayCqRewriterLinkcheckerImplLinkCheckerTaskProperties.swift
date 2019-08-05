//
// ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class ComDayCqRewriterLinkcheckerImplLinkCheckerTaskProperties: JSONEncodable {

    public var schedulerPeriod: ConfigNodePropertyInteger?
    public var schedulerConcurrent: ConfigNodePropertyBoolean?
    public var goodLinkTestInterval: ConfigNodePropertyInteger?
    public var badLinkTestInterval: ConfigNodePropertyInteger?
    public var linkUnusedInterval: ConfigNodePropertyInteger?
    public var connectionTimeout: ConfigNodePropertyInteger?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["scheduler.period"] = self.schedulerPeriod?.encodeToJSON()
        nillableDictionary["scheduler.concurrent"] = self.schedulerConcurrent?.encodeToJSON()
        nillableDictionary["good_link_test_interval"] = self.goodLinkTestInterval?.encodeToJSON()
        nillableDictionary["bad_link_test_interval"] = self.badLinkTestInterval?.encodeToJSON()
        nillableDictionary["link_unused_interval"] = self.linkUnusedInterval?.encodeToJSON()
        nillableDictionary["connection.timeout"] = self.connectionTimeout?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
