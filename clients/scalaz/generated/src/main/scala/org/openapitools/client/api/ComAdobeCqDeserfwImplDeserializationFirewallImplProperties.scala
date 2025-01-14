package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeCqDeserfwImplDeserializationFirewallImplProperties._

case class ComAdobeCqDeserfwImplDeserializationFirewallImplProperties (
  firewallDeserializationWhitelist: Option[ConfigNodePropertyArray],
firewallDeserializationBlacklist: Option[ConfigNodePropertyArray],
firewallDeserializationDiagnostics: Option[ConfigNodePropertyString])

object ComAdobeCqDeserfwImplDeserializationFirewallImplProperties {
  import DateTimeCodecs._

  implicit val ComAdobeCqDeserfwImplDeserializationFirewallImplPropertiesCodecJson: CodecJson[ComAdobeCqDeserfwImplDeserializationFirewallImplProperties] = CodecJson.derive[ComAdobeCqDeserfwImplDeserializationFirewallImplProperties]
  implicit val ComAdobeCqDeserfwImplDeserializationFirewallImplPropertiesDecoder: EntityDecoder[ComAdobeCqDeserfwImplDeserializationFirewallImplProperties] = jsonOf[ComAdobeCqDeserfwImplDeserializationFirewallImplProperties]
  implicit val ComAdobeCqDeserfwImplDeserializationFirewallImplPropertiesEncoder: EntityEncoder[ComAdobeCqDeserfwImplDeserializationFirewallImplProperties] = jsonEncoderOf[ComAdobeCqDeserfwImplDeserializationFirewallImplProperties]
}
