//
// ComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class ComAdobeXmpWorkerFilesNcommXMPFilesNCommProperties: JSONEncodable {

    public var maxConnections: ConfigNodePropertyString?
    public var maxRequests: ConfigNodePropertyString?
    public var requestTimeout: ConfigNodePropertyString?
    public var logDir: ConfigNodePropertyString?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["maxConnections"] = self.maxConnections?.encodeToJSON()
        nillableDictionary["maxRequests"] = self.maxRequests?.encodeToJSON()
        nillableDictionary["requestTimeout"] = self.requestTimeout?.encodeToJSON()
        nillableDictionary["logDir"] = self.logDir?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
