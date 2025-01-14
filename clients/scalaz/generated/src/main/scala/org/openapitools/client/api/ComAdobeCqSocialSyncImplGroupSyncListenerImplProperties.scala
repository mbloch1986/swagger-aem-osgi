package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeCqSocialSyncImplGroupSyncListenerImplProperties._

case class ComAdobeCqSocialSyncImplGroupSyncListenerImplProperties (
  nodetypes: Option[ConfigNodePropertyArray],
ignorableprops: Option[ConfigNodePropertyArray],
ignorablenodes: Option[ConfigNodePropertyString],
enabled: Option[ConfigNodePropertyBoolean],
distfolders: Option[ConfigNodePropertyString])

object ComAdobeCqSocialSyncImplGroupSyncListenerImplProperties {
  import DateTimeCodecs._

  implicit val ComAdobeCqSocialSyncImplGroupSyncListenerImplPropertiesCodecJson: CodecJson[ComAdobeCqSocialSyncImplGroupSyncListenerImplProperties] = CodecJson.derive[ComAdobeCqSocialSyncImplGroupSyncListenerImplProperties]
  implicit val ComAdobeCqSocialSyncImplGroupSyncListenerImplPropertiesDecoder: EntityDecoder[ComAdobeCqSocialSyncImplGroupSyncListenerImplProperties] = jsonOf[ComAdobeCqSocialSyncImplGroupSyncListenerImplProperties]
  implicit val ComAdobeCqSocialSyncImplGroupSyncListenerImplPropertiesEncoder: EntityEncoder[ComAdobeCqSocialSyncImplGroupSyncListenerImplProperties] = jsonEncoderOf[ComAdobeCqSocialSyncImplGroupSyncListenerImplProperties]
}
