//
// ComAdobeCqDamS7imagingImplIsImageServerComponentProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComAdobeCqDamS7imagingImplIsImageServerComponentProperties: JSONEncodable {
    public var tcpPort: ConfigNodePropertyString?
    public var allowRemoteAccess: ConfigNodePropertyBoolean?
    public var maxRenderRgnPixels: ConfigNodePropertyString?
    public var maxMessageSize: ConfigNodePropertyString?
    public var randomAccessUrlTimeout: ConfigNodePropertyInteger?
    public var workerThreads: ConfigNodePropertyInteger?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["TcpPort"] = self.tcpPort?.encodeToJSON()
        nillableDictionary["AllowRemoteAccess"] = self.allowRemoteAccess?.encodeToJSON()
        nillableDictionary["MaxRenderRgnPixels"] = self.maxRenderRgnPixels?.encodeToJSON()
        nillableDictionary["MaxMessageSize"] = self.maxMessageSize?.encodeToJSON()
        nillableDictionary["RandomAccessUrlTimeout"] = self.randomAccessUrlTimeout?.encodeToJSON()
        nillableDictionary["WorkerThreads"] = self.workerThreads?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}