//
// OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class OrgApacheJackrabbitOakSpiSecurityAuthenticationExternalImplDeProperties: JSONEncodable {

    public var handlerName: ConfigNodePropertyString?
    public var userExpirationTime: ConfigNodePropertyString?
    public var userAutoMembership: ConfigNodePropertyArray?
    public var userPropertyMapping: ConfigNodePropertyArray?
    public var userPathPrefix: ConfigNodePropertyString?
    public var userMembershipExpTime: ConfigNodePropertyString?
    public var userMembershipNestingDepth: ConfigNodePropertyInteger?
    public var userDynamicMembership: ConfigNodePropertyBoolean?
    public var userDisableMissing: ConfigNodePropertyBoolean?
    public var groupExpirationTime: ConfigNodePropertyString?
    public var groupAutoMembership: ConfigNodePropertyArray?
    public var groupPropertyMapping: ConfigNodePropertyArray?
    public var groupPathPrefix: ConfigNodePropertyString?
    public var enableRFC7613UsercaseMappedProfile: ConfigNodePropertyBoolean?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["handler.name"] = self.handlerName?.encodeToJSON()
        nillableDictionary["user.expirationTime"] = self.userExpirationTime?.encodeToJSON()
        nillableDictionary["user.autoMembership"] = self.userAutoMembership?.encodeToJSON()
        nillableDictionary["user.propertyMapping"] = self.userPropertyMapping?.encodeToJSON()
        nillableDictionary["user.pathPrefix"] = self.userPathPrefix?.encodeToJSON()
        nillableDictionary["user.membershipExpTime"] = self.userMembershipExpTime?.encodeToJSON()
        nillableDictionary["user.membershipNestingDepth"] = self.userMembershipNestingDepth?.encodeToJSON()
        nillableDictionary["user.dynamicMembership"] = self.userDynamicMembership?.encodeToJSON()
        nillableDictionary["user.disableMissing"] = self.userDisableMissing?.encodeToJSON()
        nillableDictionary["group.expirationTime"] = self.groupExpirationTime?.encodeToJSON()
        nillableDictionary["group.autoMembership"] = self.groupAutoMembership?.encodeToJSON()
        nillableDictionary["group.propertyMapping"] = self.groupPropertyMapping?.encodeToJSON()
        nillableDictionary["group.pathPrefix"] = self.groupPathPrefix?.encodeToJSON()
        nillableDictionary["enableRFC7613UsercaseMappedProfile"] = self.enableRFC7613UsercaseMappedProfile?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}

