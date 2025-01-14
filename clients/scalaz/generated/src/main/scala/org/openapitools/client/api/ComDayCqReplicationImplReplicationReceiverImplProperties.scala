package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComDayCqReplicationImplReplicationReceiverImplProperties._

case class ComDayCqReplicationImplReplicationReceiverImplProperties (
  receiverTmpfileThreshold: Option[ConfigNodePropertyInteger],
receiverPackagesUseInstall: Option[ConfigNodePropertyBoolean])

object ComDayCqReplicationImplReplicationReceiverImplProperties {
  import DateTimeCodecs._

  implicit val ComDayCqReplicationImplReplicationReceiverImplPropertiesCodecJson: CodecJson[ComDayCqReplicationImplReplicationReceiverImplProperties] = CodecJson.derive[ComDayCqReplicationImplReplicationReceiverImplProperties]
  implicit val ComDayCqReplicationImplReplicationReceiverImplPropertiesDecoder: EntityDecoder[ComDayCqReplicationImplReplicationReceiverImplProperties] = jsonOf[ComDayCqReplicationImplReplicationReceiverImplProperties]
  implicit val ComDayCqReplicationImplReplicationReceiverImplPropertiesEncoder: EntityEncoder[ComDayCqReplicationImplReplicationReceiverImplProperties] = jsonEncoderOf[ComDayCqReplicationImplReplicationReceiverImplProperties]
}
